import os
import sys
import pyutils as u


def funcs_():
    with open("list.md") as f:
        records = f.readlines()
    solution_dir = "../algorithms/cpp/nowcoder"
    for record in records[2:]:
        record_parts = record.split("|")
        print(record_parts)

        problem_num = record_parts[1].strip()
        print(problem_num)

        for solution in os.listdir(solution_dir):
            if solution.startswith(problem_num):
                print(solution)
                break

        solution_path = "[C++](./algorithms/cpp/nowcoder/{})".format(solution)
        print(solution_path)
        output = "|{}|{}|{}|{}|{}|{}|\n".format(record_parts[1],record_parts[2],solution_path,record_parts[3],record_parts[4],record_parts[5])

        with open("../aa.md",mode="a") as f:
            f.write(output)
    pass


def run():
    if (len(sys.argv) != 1):
        print("args error ...")
        sys.exit(0)

    funcs_()


if __name__ == "__main__":
    run()
