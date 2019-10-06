import os
from datetime import datetime

from shutil import copyfile



def files_traversal(path, dst):
    for root, dirs, files in os.walk(path):
        for file in files:
            if (file.endswith("cpp")):
                # print(file)
                file_name = os.path.join(root, file)
                # print(file_name)

                path_parts = file_name.split("/")
                dst_folder = path_parts[-2]
                dst_folder = os.path.join(dst,dst_folder)
                if not os.path.exists(dst_folder):
                    os.makedirs(dst_folder)
                dst_filename = os.path.join(dst_folder, file)
                copyfile(file_name, dst_filename)

                # print()


if __name__ == "__main__":
    root_path = "/Users/tianm/repos/coding-interviews/reference/CodingInterviewChinese2"
    dst = "./path/"
    res = files_traversal(root_path, dst)
