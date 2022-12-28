import os
import ctypes
import subprocess
import shlex

path = './address.txt'
f = open(path, 'r')
data = f.read()
f.close()

#cmd = f"./AccessPointor {int(data)} HellO!"
#tokens = shlex.split(cmd) # => ['ls', 'tmp']
#subprocess.run(tokens)
##subprocess.call(["./AccessPointor",f"{int(data)}","HellO!"])

lib = ctypes.cdll.LoadLibrary("./pointor_access.so")
lib.pointor_access.argtypes = [ctypes.c_uint64, ctypes.c_char_p]
print(f"{int(data)}")
lib.pointor_access(int(data), "Hello!".encode())