#! /bin/bash

rm -rf bin
mkdir -p bin
for i in `ls loops/*.c`; do
  executable=`echo ${i} | sed 's/loops\///' | sed "s/.c$//"`
  gcc -o bin/${executable} ${i} 2>/dev/null
done