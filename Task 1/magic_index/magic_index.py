from __future__ import division


class MagicIndex(object):

    def find_magic_index(self, array):
        if array is None or not array:
            return -1
        return self._find_magic_index(array, 0, len(array) - 1)

    def _find_magic_index(self, array, start, end):
        if end < start or start < 0 or end >= len(array):
            return -1
        mid = (start + end) // 2
        if mid == array[mid]:
            return mid
        left_end = min(mid - 1, array[mid])
        left_result = self._find_magic_index(array, start, end=left_end)
        if left_result != -1:
            return left_result
        right_start = max(mid + 1, array[mid])
        right_result = self._find_magic_index(array, start=right_start, end=end)
        if right_result != -1:
            return right_result
        return -1

