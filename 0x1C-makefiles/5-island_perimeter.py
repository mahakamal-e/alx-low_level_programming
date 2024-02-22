#!/usr/bin/python3
"""Module for calculate the perimeter """


def island_perimeter(grid):
    """ method that returns the perimeter of the island in grid"""
    calc_perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[i])):
            if grid[i][j] == 1:

                if i > 0 and grid[i - 1][j] == 1:
                    calc_perimeter -= 1
                if i < len(grid) - 1 and grid[i + 1][j] == 1:
                    calc_perimeter -= 1
                if j > 0 and grid[i][j - 1] == 1:
                    calc_perimeter -= 1
                if j < len(grid[0]) - 1 and grid[i][j + 1] == 1:
                    calc_perimeter -= 1

                calc_perimeter += 4
    return calc_perimeter
