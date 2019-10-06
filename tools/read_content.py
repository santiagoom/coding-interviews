import os, sys

import numpy as np

from shutil import copyfile


def read_content(path):
    with open(path, mode='r', encoding='gbk')as f:
        content = f.read()
    print(content)

    with open("out.cpp", encoding='utf8', mode='w') as f:
        f.write(content)
    pass


def files_traversal(path):
    for root, dirs, files in os.walk(path):
        for file in files:
            file_name = os.path.join(root, file)
            # print(file_name)
            if (file.endswith("cpp")):
                path_parts = file_name.split("/")
                dst_folder = path_parts[-2]
                try:
                    with open(file_name, mode='r', encoding='gbk')as f:
                        content = f.read()
                except:
                    try:
                        with open(file_name, mode='r', encoding='utf8')as f:
                            content = f.read()
                    except:
                        pass
                os.remove(file_name)
                dst_name = os.path.join(root, dst_folder + "_std.cpp")
                with open(dst_name, encoding='utf8', mode='w') as f:
                    f.write(content)


def Run():
    if (len(sys.argv) != 1):
        print("args error ...")
        sys.exit(0)

    path = "/Users/tianm/repos/coding-interviews/tools/path_std"
    # read_content(path)
    files_traversal(path)


if __name__ == "__main__":
    Run()
