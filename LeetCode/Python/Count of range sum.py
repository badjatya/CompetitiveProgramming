class Solution:
    def countRangeSum(self, nums: [int], lower: int, upper: int) -> int:
        N = len(nums)
        prefixSums = [0] * (N + 1)
        for i in range(N):
            prefixSums[i + 1] = prefixSums[i] + nums[i]
        result = 0

        def merge(prefixSums, low, mid, high):
            tmp = [0] * (high - low + 1)
            p, i, j = 0, low, mid + 1
            while i <= mid and j <= high:
                if prefixSums[i] < prefixSums[j]:
                    tmp[p] = prefixSums[i]
                    i += 1
                else:
                    tmp[p] = prefixSums[j]
                    j += 1
                p += 1
            while i <= mid:
                tmp[p] = prefixSums[i]
                i += 1
                p += 1
            while j <= high:
                tmp[p] = prefixSums[j]
                j += 1
                p += 1
            for i in range(low, high + 1):
                prefixSums[i] = tmp[i - low]

        def mergeSort(prefixSums, low, high):
            nonlocal result
            if low >= high: return
            mid = low + (high - low) // 2
            mergeSort(prefixSums, low, mid)
            mergeSort(prefixSums, mid + 1, high)
            startIndex, endIndex = mid + 1, mid + 1

            for index in range(low, mid + 1):
                while startIndex <= high and prefixSums[startIndex] - prefixSums[index] < lower:
                    startIndex += 1
                while endIndex <= high and prefixSums[endIndex] - prefixSums[index] <= upper:
                    endIndex += 1
                result += endIndex - startIndex
            merge(prefixSums, low, mid, high)

        mergeSort(prefixSums, 0, N)
        return result