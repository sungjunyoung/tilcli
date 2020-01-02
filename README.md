# todocli

### do cmake
```bash
$ ./cmake.sh
+ test -e build
+ mkdir build
+ cd build
+ cmake ..
-- The C compiler identification is GNU 8.3.0
-- The CXX compiler identification is GNU 8.3.0
-- Check for working C compiler: /usr/lib/ccache/cc
-- Check for working C compiler: /usr/lib/ccache/cc -- works
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Detecting C compile features
-- Detecting C compile features - done
-- Check for working CXX compiler: /usr/lib/ccache/c++
-- Check for working CXX compiler: /usr/lib/ccache/c++ -- works
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Boost version: 1.67.0
-- Found the following Boost libraries:
--   program_options
-- Submodule updating
-- Configuring done
-- Generating done
-- Build files have been written to: /home/sungjunyoung/Sources/private/todocli/build
+ echo done.
done.
```

### build & install
```bash
$ cd build
$ make
Scanning dependencies of target todocli
[ 50%] Building CXX object CMakeFiles/todocli.dir/src/todocli.cc.o
[100%] Linking CXX executable bin/todocli
[100%] Built target todocli

$ sudo make install
[sudo] password for sungjunyoung: 
[100%] Built target todocli
Install the project...
-- Install configuration: ""
-- Installing: /usr/local/bin/todocli
```