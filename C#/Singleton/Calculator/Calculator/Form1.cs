using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Windows.Forms;

namespace Calculator
{
    public partial class Form1 : Form
    {
        private int left = 0;
        private int right = 0;
        private Random rd = new Random();
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            Form1_Load(sender, e);
        }

        private void label5_Click(object sender, EventArgs e)
        {
            throw new System.NotImplementedException();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            labelLeft.Text = left.ToString();
            labelRight.Text = right.ToString();
        }


        private void 确定_Click(object sender, EventArgs e)
        {
            string strResult = textBox1.Text;
            if (string.IsNullOrEmpty(strResult)) {
                label5.Text = $"无输入";
                return;
            }
            int num;
            try {
                num = int.Parse(strResult);
                if (num == left + right) {
                    label5.Text = $"运算正确";
                } else {
                    label5.Text = $"运算错误";
                }
            } catch (Exception ex) {
                Console.WriteLine($"Unable to parse str");
                label5.Text = $"输入格式错误";
            }

        }
    }
}