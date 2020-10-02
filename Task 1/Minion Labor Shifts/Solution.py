def answer(data, n):
    my_set = set(data)
    for s in data_set:
        if data.count(s) > n:
            data = filter(lambda a: a != s, data)
    return data
