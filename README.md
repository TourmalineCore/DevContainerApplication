# DevContainerApplication

Example C++ application for measuring performance with Build Server.

## How to set up local build server via VSCode
1. Set up SSH connection in Dockerfile:
```
# SSH
RUN apt update \
    && apt -y install openssh-server \
    && rm -rf /var/lib/apt/lists/* 
RUN mkdir -p /var/run/sshd

# authorize SSH connection with root account
# RUN sed -i '/^#/!s/PermitRootLogin .*/PermitRootLogin yes/' /etc/ssh/sshd_config
RUN echo "PermitRootLogin yes" >> /etc/ssh/sshd_config
# RUN service ssh start
EXPOSE 22/tcp

# change password root
RUN echo "root:password"|chpasswd

CMD ["/usr/sbin/sshd", "-D"]
```
2. Expose port for SSH connection in docker-compose.yml:
```
    ports:
    - "7022:22"
```
3. Performe source code mounting:
```
volumes:
    - ./:/test-build-server
```
4. Build and run Build Server docker container:
```
docker compose up --build
```
5. Go to the VSCode and install extension **```Remote - SSH```**.
6. Press ```ctrl+shift+p``` or ```f1``` to open command menu.
7. Enter **ssh** and choose ```add host```.
8. Connect to localhost:
```
root@localhost -A -p 7022
```
9. If you already have connection via SSH with chosen port, change port forwarding to another or delete record about this connection in ```.ssh/known_hosts```.
10. When you successfully connected, choose ```open folder``` and choose ```mounted volume from root repository```.
11. Install required extinsions to container via VSCode extinsion store.
12. Have fun!