def partition(array, min, max):
    pivot = array[max]
    i = min - 1
    for j in range(min, max):
        if array[j] <= pivot:
            i = i + 1
            (array[i], array[j]) = (array[j], array[i])
    (array[i + 1], array[max]) = (array[max], array[i + 1])
# return the position from where the partition is done
    return i + 1


def quickSort(array, min, max):
    if min < max:
        sub_array = partition(array, min, max)
        quickSort(array, min, sub_array - 1)
        quickSort(array, sub_array + 1, max)
        
array = [8, 7, 2, 1, 0, 9, 6]
print("Unsorted Array")
print(array)
size = len(array)
quickSort(array, 0, size - 1)
print(' Sorted Array in Ascending Order: ')
print(array)