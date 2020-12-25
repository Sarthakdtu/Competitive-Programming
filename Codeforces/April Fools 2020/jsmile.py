import numpy as np
from PIL import Image
from PIL import Image

"""basewidth = 64
img = Image.open('code.png')
wpercent = (basewidth/float(img.size[0]))
hsize = int((float(img.size[1])*float(wpercent)))
img = img.resize((basewidth,hsize), Image.ANTIALIAS)
img.save('coder.png')""" 

img = Image.open('coder.png').convert('1')
arr = np.array(img)
#print(arr[1])
mat  = list()
for i in range(len(arr)):
    mat.append("")
    for j in range(len(arr)):
        if arr[i][j]:
            mat[i] += "1";
        else:
            mat[i] += "0";


for i in range(len(arr)):
   print(mat[i])

"""
img = Image.open('coder.png').convert('1')
arr = np.array(img)
#print(arr[1])
mat  = list()
for i in range(len(arr)):
    mat.append("{")
    for j in range(len(arr)):
        if arr[i][j]:
            mat[i] += "1, ";
        else:
            mat[i] += "0,";
    mat[i] += "},"


for i in range(len(arr)):
   print(mat[i])
"""