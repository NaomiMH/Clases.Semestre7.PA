#!/bin/bash
egrep -o '<s>#</s><b>.{0,140}</b>' $1 > temp1.txt
egrep -o -f ./temp1.txt $1 | sort -n | uniq -c > tabla.txt
rm -r temp1.txt
cat tabla.txt | sed -e 's/[</]*[bs]>//g' | sed -e 's/[</]*strong>//g' > tarea.txt
rm -r tabla.txt
