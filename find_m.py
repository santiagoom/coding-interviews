import os
from datetime import datetime


def files_traversal(path):
    for root, dirs, files in os.walk(path):
        for file in files:
            file_name = os.path.join(root, file)

            if (file.endswith(".m")):
                print(file)


if __name__ == "__main__":
    root_path = "./"
    res = files_traversal(root_path)
