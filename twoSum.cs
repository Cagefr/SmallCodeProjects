using System;
using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;

//This c# program takes a target and finds what index that two integers in an array add up to that target.

namespace consoleProgram
{
    public class Program
    {
        public static void Main(string[] args)
        {
            //Your code goes here
            int target = 6;
            int[] nums = {3,3};
            int size = 0;
            int q;
            int e;

            foreach (int num in nums)
            {
                size = size + 1; //Determines the size of the array. Could also use .length
            }

            for(q = 0; q <= size; q++)
            {
                for(e = 0; e <= size;  e++)
                {
                    if(q != 0 && nums[q] + nums[e] == target)
                    {
                        int x = q;
                        int y = e;
                        Console.WriteLine("Solution Found:");
                        Console.WriteLine($"Target Sum found at: [{x}, {y}]");
                        break;
                        //Below code was for LeetCode assesments
                        //return new int[] {x, y};
                    }
                }
            }
            
            //Code Below was for leet code output
            //return new int[]{};
        }
    }
}
