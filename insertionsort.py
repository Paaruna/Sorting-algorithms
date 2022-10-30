def insertionSort(arr):
 
    # Traverse through 1 to len(arr)
    for i in range(1, len(arr)):
 
        key = arr[i]
 
        # Move elements of arr[0..i-1], that are
        # greater than key, to one position ahead
        # of their current position
        j = i-1
        while j >=0 and key < arr[j] :
                arr[j+1] = arr[j]
                j -= 1
        arr[j+1] = key
 
 
#sorting the array [12, 11, 13, 5, 6] using insertionSort
arr = []
size = int(input("Input array size: "))
for i in range(size):
    arr.append(int(input("Input element: ")))

print("Array berfore sorted is :", arr)    

insertionSort(arr)
lst = [] #empty list to store sorted elements
for i in range(size):
    lst.append(arr[i])     #appending the elements in sorted order
print("Sorted array is : ", lst)