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


if __name__ == "__main__":
    topic_sort()
