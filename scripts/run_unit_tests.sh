echo "Testing Project"
( cd ./cmake-build || exit 1
ctest -j"$(nproc)" -C ${CMAKE_BUILD_TYPE:-Debug} -T test --output-on-failure)