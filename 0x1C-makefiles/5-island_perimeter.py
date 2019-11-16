#!/usr/bin/python3
"""
calculate the perimeter of an island
"""


def island_perimeter(grid):
    """calculates the perimeter of an island"""

    row = 0
    cell = 0
    boundary = [4, 3, 2, 1, 0]
    final_perimeter = 0
    count = 0

    for row in range(1, len(grid) - 1):
        cell = 0
        while cell < len(grid[row]):
            if grid[row][cell] == 1:
                count = 0
                # check cell prev
                if cell > 0 and grid[row][cell - 1] == 1:
                    count += 1
                # check cell next
                if cell < len(grid[row]) - 1 and grid[row][cell + 1] == 1:
                    count += 1
                # check cell under
                if row < len(grid) - 1 and grid[row + 1][cell] == 1:
                    count += 1
                # check cell above
                if row > 0 and grid[row - 1][cell] == 1:
                    count += 1
                final_perimeter += boundary[count]
            cell = cell + 1
        row = row + 1
    return final_perimeter
