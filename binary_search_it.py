def binarySearch(v, N):
    # min is the lower bound, max is the upper bound
    min = 0
    max = len(v) - 1

    # while min <= max
    while max - min > 1:
        # mid is the average, or middle of min and max
        mid = (max + min) // 2
    # if mid is too small,
        if v[mid] < N:
            # shift the lower bound up
            min = mid + 1
    # otherwise,
        else:
            # shift the upper bound down
            max = mid

    if v[min] == N:
        print(min)
    elif v[max] == N:
        print(max)
    else:
        print(-1)


v = [1, 3, 5, 21341, 21314, 2300, 495, 3283, 742]
# find 1
binarySearch(v, 1)
# find 21341
binarySearch(v, 21341)
# find 0
binarySearch(v, 0)
