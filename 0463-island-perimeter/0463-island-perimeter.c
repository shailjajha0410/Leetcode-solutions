int islandPerimeter(int** grid, int gridSize, int* gridColSize) {
    int perimeter = 0;
    int rows = gridSize;
    int cols = gridColSize[0];

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (grid[i][j] == 1) {

                // Up
                if (i == 0 || grid[i - 1][j] == 0)
                    perimeter++;

                // Down
                if (i == rows - 1 || grid[i + 1][j] == 0)
                    perimeter++;

                // Left
                if (j == 0 || grid[i][j - 1] == 0)
                    perimeter++;

                // Right
                if (j == cols - 1 || grid[i][j + 1] == 0)
                    perimeter++;
            }
        }
    }
    return perimeter;
}
