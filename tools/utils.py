import os
import sys
from shutil import copyfile


def search_cpp(src, dst):
    if not os.path.exists(dst):
        os.makedirs(dst)
    for root, dirs, files in os.walk(src):
        for file in files:
            if (file.endswith(".cpp")) or (file.endswith(".h")):
                # print(file)
                file_name = os.path.join(root, file)
                # print(file_name)

                path_parts = file_name.split("/")
                dst_folder = path_parts[-2]
                dst_folder = os.path.join(dst, dst_folder)
                if not os.path.exists(dst_folder):
                    os.makedirs(dst_folder)
                dst_filename = os.path.join(dst_folder, file)
                # dst_filename = os.path.join(dst, file)
                copyfile(file_name, dst_filename)

                # print()
    pass


def search_gbk2utf8(src, dst):
    if not os.path.exists(dst):
        os.makedirs(dst)
    for root, dirs, files in os.walk(src):
        for file in files:
            # if (file.endswith(".cpp")) or (file.endswith(".h")):
            if (file.endswith(".cpp")) :
                # print(file)
                file_name = os.path.join(root, file)
                # print(file_name)

                path_parts = file_name.split("/")
                dst_folder = path_parts[-2]
                # dst_folder = os.path.join(dst, dst_folder)

                try:
                    with open(file_name, mode='r', encoding='gbk')as f:
                        content = f.read()
                except:
                    try:
                        with open(file_name, mode='r', encoding='utf8')as f:
                            content = f.read()
                    except:
                        pass
                dst_name = os.path.join(dst, "{}_std.cpp".format(dst_folder))
                with open(dst_name, encoding='utf8', mode='w') as f:
                    f.write(content)

                # print()
    pass


def gbk2utf8(path):
    for root, dirs, files in os.walk(path):
        for file in files:
            file_name = os.path.join(root, file)
            # print(file_name)
            if (file.endswith("cpp")) or (file.endswith(".h")):
                path_parts = file_name.split("/")
                dst_folder = path_parts[-2]
                print(dst_folder)
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
                dst_name = os.path.join(root, "{}_std.cpp".format(dst_folder))
                with open(dst_name, encoding='utf8', mode='w') as f:
                    f.write(content)
    pass


def topic_sort():
    path = "../record.txt"
    with open(path, mode='r') as f:
        contents = f.readlines()

    lines = []
    for line in contents:
        lines.append(line[:-1])

    lines = sorted(lines)

    for line in lines:
        print(line)
    pass


def Utilities_decode(path, dst):
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


def funcs_():
    pass


def run():
    if (len(sys.argv) != 1):
        print("args error ...")
        sys.exit(0)

    # step1 search .cpp and .h
    code_src = "/Users/tianm/repos/coding-interviews/reference/CodingInterviewChinese2"
    output = "./reference/"
    # search_cpp(code_src, output)

    # step2 gbk2utf8
    # gbk2utf8(output)

    # combine 1 and 2
    search_gbk2utf8(code_src, output)


if __name__ == "__main__":
    run()
