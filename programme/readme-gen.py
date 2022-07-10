# This file is used to generate the README.md file for the programme.

# run this file with:
# python3 readme-gen.py

from asyncore import read
import os
import sys

# get all subdirectory paths
subdirs = [os.path.join(sys.path[0], d) for d in os.listdir(
    sys.path[0]) if os.path.isdir(os.path.join(sys.path[0], d))]

# read README.md file of each subdirectory
readmes = []
for subdir in subdirs:
    readmes.append(open(os.path.join(subdir, "README.md")).read())

# read ## text from each subdirectory
titles = []
for readme in readmes:
    titles.append(readme.split("## ")[1].split("\n")[0])

# update subdirectory paths
for i in range(len(subdirs)):
    subdirs[i] = "."+subdirs[i].split(sys.path[0])[1]+"/"

# renerate dictionary of subdirectory paths and titles
subdir_dict = {}
for i in range(len(subdirs)):
    subdir_dict[subdirs[i]] = titles[i]

# sort dictionary by subdirectory paths
subdir_dict = sorted(subdir_dict.items(), key=lambda x: x[0])

# open README.md file and write the header
readme = open(os.path.join(sys.path[0], "README.md"), "w")
readme.write("## List of Programmes\n")
readme.write("\n")

# iterate through dictionary and write each subdirectory path and title
index = 1
for subdir, title in subdir_dict:
    readme.write(str(index)+". ### ["+title+"]("+subdir+")\n")
    index += 1

readme.close()
