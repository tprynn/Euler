// Yes, I know this can be done a lot more easily 
// using a quadratic formula for the diagonals
public class euler28 {
	public int grid[][];
	public int max, width, height, centerX, centerY;
	
	public static void main(String[] args) {
		euler28 test = new euler28(1001, 1001);
		//Subtract 1 so the center isn't double counted
		int result = -1;
		//Sum the diagonals
		for(int i = 0; i < test.width; i++) {
			result += test.grid[i][i] + test.grid[i][test.width-1-i];
		}
		System.out.println(result);
	}

	public euler28(int x, int y) {
		width = x;
		height = y;
		// A 2D Array holds the spiral values
		grid = new int[width][height];
		max = width*height;
		centerX = width/2;
		centerY = height/2;
		createSpiral();
	}

	private void createSpiral() {
		for(int l = 0; l < width; l++) {
			for(int m = 0; m < height; m++) {
				grid[l][m] = 0;
			}
		}
		
		int i = 3, x = centerX, y = centerY;
		grid[x][y] = 1;
		x++;
		grid[x][y] = 2;
		while(i <= max) {
			while(grid[x-1][y] != 0 && i <= max) {
				y--;
				grid[x][y] = i;
				i++;
			}
			while(grid[x][y+1] != 0 && i <= max) {
				x--;
				grid[x][y] = i;
				i++;
			}
			while(grid[x+1][y] != 0 && i <= max) {
				y++;
				grid[x][y] = i;
				i++;
			}
			while(grid[x][y-1] != 0 && i <= max) {
				x++;
				grid[x][y] = i;
				i++;
			}
		}
	}
}
