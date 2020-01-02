#!/bin/sh -x
if test -e build; then
  echo "build directory already exists; rm -rf build and rerun"
  exit 1
fi

mkdir build
cd build

cmake "$@" ..

echo done.