import os
from datetime import datetime

from shutil import copyfile


def files_traversal(path, dst):
    for root, dirs, files in os.walk(path):
        for file in files:
            file_name = os.path.join(root, file)
            content = ""
            try:
                with open(file_name, mode='r', encoding='gbk')as f:
                    content = f.read()

            except:
                try:
                    with open(file_name, mode='r', encoding='utf8')as f:
                        content = f.read()
                except:
                    pass
            print(content)
            with open(file_name, encoding='utf8', mode='w') as f:
                f.write(content)


if __name__ == "__main__":
    dst = "./Utilities_decode/"
    res = files_traversal(dst, dst)
