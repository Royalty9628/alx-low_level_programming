#!/usr/bin/python3

def island_perimeter(grid):

    wid = len(grid[0])
    heit = len(grid)
    per = 0

    for c in range(heit):
        for h in range(wid):
            if grid[c][h] == 0:
                if (h > 0 and grid[c][h - 1] == 1):
                    per += 1
                if (c > 0 and grid[c - 1][h] == 1):
                    per += 1
                if (h < wid - 1 and grid[c][h + 1] == 1):
                    per += 1
                if (c < heit - 1 and grid[c + 1][h] == 1):
                    per += 1
    return per
