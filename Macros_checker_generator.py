# -*- coding: utf-8 -*-
# This script generates special functions-checkers of MEGA SINGLETON macros correctness 
# Author: Ivan Arkhipov
# Date: 26.02.2018

import hashlib
file = open("defines.txt", "r")
a = [line[:-1] + " void Correct_" + line[8] + "_Letter_" + hashlib.md5(line.encode('utf8')).hexdigest() + "() {}" for line in file]
b = [i.split()[3] + "; " for i in a]
file.close()

file = open("defines_gen.txt", "w")
for i in a:
    print(i, file = file)
print('', file = file)
for i in b:
    print(i, file = file, end='')
file.close()
