
# Point Cloud Library on macOS

A friend called one evening and needed some help getting pcl into a CLion project on macOS so he could debug and step into its code.

https://github.com/PointCloudLibrary/pcl

Thrown together while I was in an astronomy presentation, this repo is the result of that phone call.

### run this first!

one of pcl's dependencies will need pkg-config to build

      brew install pkg-config

Note that CLion still can't parse an environment variable in a CMake call. Please upvote:

https://youtrack.jetbrains.com/issue/CPP-23439/CMake-options-does-not-expand-environment-variable.%C2%A0

In the meantime:

1. Go to File -> Settings -> Build, Execution, Deployment -> CMake
2. Choose one profile, and then find "CMake Options".
3. Insert value to the option: -DCMAKE_TOOLCHAIN_FILE=<path_to_vcpkg>/scripts/buildsystems/vcpkg.cmake
