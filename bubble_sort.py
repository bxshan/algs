def bubbleSort(arr):
    n = len(arr)
    # last i elements already in place
    for i in range(n):
        # sort remaining, j cannot be last element of sub-array
        for j in range(0, n-i-1):
            # if arr[j] and arr[j+1] are not in order
            if arr[j] > arr[j+1]:
                # swap arr[j] and arr[j+1]
                arr[j], arr[j+1] = arr[j+1], arr[j]
    print(arr)


arr = [5, 4, 33, 2, 456453, 23453412, 0, 23, 23, 341, 34652, 353, 245]
bubbleSort(arr)
