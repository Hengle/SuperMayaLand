#!/bin/bash
#cmake ..; make; cd bin/; ./SuperMayaLand; cd ../
export URHO3D_HOME=/usr/local/dev/Urho3D-1.7.1/build/
echo $URHO3D_HOME
cmake -DCMAKE_BUILD_TYPE=Debug -DCMAKE_C_COMPILER=/usr/local/Cellar/llvm/9.0.0/bin/clang -DCMAKE_CXX_COMPILER=/usr/local/Cellar/llvm/9.0.0/bin/clang++ -G "CodeBlocks - Unix Makefiles" ..; make; cd bin/; ./SuperMayaLand; cd ../
