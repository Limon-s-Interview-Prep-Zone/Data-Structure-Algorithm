def merge(arr, l, m, r):
	n1 = m - l + 1
	n2 = r - m

	# create temp arrays
	L = [0] * (n1)
	R = [0] * (n2)

	# Copy data to temp arrays L[] and R[]
	for i in range(0, n1):
		L[i] = arr[l + i]

	for j in range(0, n2):
		R[j] = arr[m + 1 + j]

	# Merge the temp arrays back into arr[l..r]
	i = 0
	j = 0
	k = l

	while i < n1 and j < n2:
		if L[i] <= R[j]:
			arr[k] = L[i]
			i += 1
		else:
			arr[k] = R[j]
			j += 1
		k += 1

	# Copy the remaining elements of L[], if there
	# are any
	while i < n1:
		arr[k] = L[i]
		i += 1
		k += 1

	# Copy the remaining elements of R[], if there
	# are any
	while j < n2:
		arr[k] = R[j]
		j += 1
		k += 1

def divide(arr, l, r):
    if l>=r:
        return
    if l < r:

        # Same as (l+r)//2, but avoids overflow for
        m = l+(r-l)//2

        divide(arr, l, m)
        divide(arr, m+1, r)
        merge(arr, l, m, r)

def traverse(arr):
	for i in range(len(arr)):
		print(arr[i],end=" ")
		
# Driver code to test above
arr = [12, 11, 13, 5, 6, 7]
n = len(arr)
print("Given array is")
traverse(arr)

divide(arr, 0, n-1)
print("\n\nSorted array is")
traverse(arr)

# This code is contributed by Mohit Kumra
