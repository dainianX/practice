using System;

public class CrashGame
{
    // 生成宝石的初始布局
    public int[,] InitJewelsBoard(int rowNum, int colNum, int numOfType)
    {
        int[,] board = new int[rowNum, colNum];
        Random random = new Random();

        for (int i = 0; i < rowNum; i++)
        {
            for (int j = 0; j < colNum; j++)
            {
                board[i, j] = random.Next(1, numOfType + 1);
            }
        }

        return board;
    }

    // 检查横向是否有匹配的宝石
    public bool CheckHorizontalMatches(int[,] board, int row, int column)
    {
        int type = board[row, column];
        int count = 1;
        int left = column - 1;
        int right = column + 1;

        while (left >= 0 && board[row, left] == type)
        {
            count++;
            left--;
        }

        while (right < board.GetLength(1) && board[row, right] == type)
        {
            count++;
            right++;
        }

        return count >= 3;
    }

    // 检查纵向是否有匹配的宝石
    public bool CheckVerticalMatches(int[,] board, int row, int column)
    {
        int type = board[row, column];
        int count = 1;
        int up = row - 1;
        int down = row + 1;

        while (up >= 0 && board[up, column] == type)
        {
            count++;
            up--;
        }

        while (down < board.GetLength(0) && board[down, column] == type)
        {
            count++;
            down++;
        }

        return count >= 3;
    }

    // 消除宝石并让上方宝石落下
    public void EraseJewels(int[,] board) 
    {
        bool foundMatch = true;

        while (foundMatch)
        {
            foundMatch = false;

            for (int i = 0; i < board.GetLength(0); i++)
            {
                for (int j = 0; j < board.GetLength(1); j++)
                {
                    if (board[i, j] != 0)
                    {
                        if (CheckHorizontalMatches(board, i, j) || CheckVerticalMatches(board, i, j))
                        {
                            EraseMatch(board, i, j);
                            foundMatch = true;
                        }
                    }
                }
            }
        }
    }

    // 消除匹配的宝石并使上方宝石落下
    private void EraseMatch(int[,] board, int row, int column)
    {
        int type = board[row, column];

        // 横向匹配的宝石
        int left = column;
        int right = column;

        while (left >= 0 && board[row, left] == type)
        {
            board[row, left] = 0;
            left--;
        }

        while (right < board.GetLength(1) && board[row, right] == type)
        {
            board[row, right] = 0;
            right++;
        }

        // 纵向匹配的宝石
        int up = row;
        int down = row;

        while (up >= 0 && board[up, column] == type)
        {
            board[up, column] = 0;
            up--;
        }

        while (down < board.GetLength(0) && board[down, column] == type)
        {
            board[down, column] = 0;
            down++;
        }

        // 让上方宝石落下
        for (int i = row - 1; i >= 0; i--)
        {
            board[i + 1, column] = board[i, column];
            board[i, column] = 0;
        }

        // 重新填充空出的位置
        for (int i = 0; i < board.GetLength(0); i++)
        {
            for (int j = 0; j < board.GetLength(1); j++)
            {
                if (board[i, j] == 0)
                {
                    board[i, j] = new Random().Next(1, 4); // 假设宝石类型从1到3
                }
            }
        }
    }
    
    public void PrintJewelsBoard(int[,] board)
    {
        for (int i = 0; i < board.GetLength(0); i++)
        {
            for (int j = 0; j < board.GetLength(1); j++)
            {
                Console.Write(board[i, j] + " ");
            }
            Console.WriteLine();
        }
    }
}

class Program
{
    static void Main(string[] args)
    {
        CrashGame game = new CrashGame();
        int[,] board = game.InitJewelsBoard(5, 5, 3);
        Console.WriteLine("Initial Jewel Board:");
        game.PrintJewelsBoard(board);
        
        game.EraseJewels(board);
        Console.WriteLine("\nAfter erasing:");
        game.PrintJewelsBoard(board);
    }
}
