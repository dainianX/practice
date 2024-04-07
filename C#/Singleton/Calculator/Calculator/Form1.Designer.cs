using System.Windows.Forms;

namespace Calculator
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }

            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.下一题 = new System.Windows.Forms.Button();
            this.labelLeft = new System.Windows.Forms.Label();
            this.label2 = new System.Windows.Forms.Label();
            this.labelRight = new System.Windows.Forms.Label();
            this.label4 = new System.Windows.Forms.Label();
            this.label5 = new System.Windows.Forms.Label();
            this.textBox1 = new System.Windows.Forms.TextBox();
            this.Enter = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // 下一题
            // 
            this.下一题.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.下一题.Location = new System.Drawing.Point(286, 88);
            this.下一题.Name = "下一题";
            this.下一题.Size = new System.Drawing.Size(141, 31);
            this.下一题.TabIndex = 0;
            this.下一题.Text = "下一题";
            this.下一题.UseVisualStyleBackColor = true;
            this.下一题.Click += new System.EventHandler(this.button1_Click);
            // 
            // labelLeft
            // 
            this.labelLeft.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelLeft.Location = new System.Drawing.Point(93, 211);
            this.labelLeft.Name = "labelLeft";
            this.labelLeft.Size = new System.Drawing.Size(58, 33);
            this.labelLeft.TabIndex = 3;
            this.labelLeft.Text = "1";
            // 
            // label2
            // 
            this.label2.Font = new System.Drawing.Font("Arial Narrow", 18F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label2.Location = new System.Drawing.Point(166, 205);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(58, 33);
            this.label2.TabIndex = 4;
            this.label2.Text = "+";
            // 
            // labelRight
            // 
            this.labelRight.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.labelRight.Location = new System.Drawing.Point(242, 211);
            this.labelRight.Name = "labelRight";
            this.labelRight.Size = new System.Drawing.Size(58, 33);
            this.labelRight.TabIndex = 5;
            this.labelRight.Text = "1";
            // 
            // label4
            // 
            this.label4.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label4.Location = new System.Drawing.Point(318, 211);
            this.label4.Name = "label4";
            this.label4.Size = new System.Drawing.Size(58, 33);
            this.label4.TabIndex = 6;
            this.label4.Text = "=";
            // 
            // label5
            // 
            this.label5.Font = new System.Drawing.Font("Book Antiqua", 16.2F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.label5.Location = new System.Drawing.Point(254, 336);
            this.label5.Name = "label5";
            this.label5.Size = new System.Drawing.Size(133, 33);
            this.label5.TabIndex = 7;
            this.label5.Text = "评价：";
            this.label5.Click += new System.EventHandler(this.label5_Click);
            // 
            // textBox1
            // 
            this.textBox1.Location = new System.Drawing.Point(408, 214);
            this.textBox1.Name = "textBox1";
            this.textBox1.Size = new System.Drawing.Size(92, 22);
            this.textBox1.TabIndex = 8;
            // 
            // Enter
            // 
            this.Enter.Font = new System.Drawing.Font("Arial Narrow", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(0)));
            this.Enter.Location = new System.Drawing.Point(579, 208);
            this.Enter.Name = "Enter";
            this.Enter.Size = new System.Drawing.Size(99, 31);
            this.Enter.TabIndex = 9;
            this.Enter.Text = "确定";
            this.Enter.UseVisualStyleBackColor = true;
            this.Enter.Click += new System.EventHandler(this.确定_Click);
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.Enter);
            this.Controls.Add(this.textBox1);
            this.Controls.Add(this.label5);
            this.Controls.Add(this.label4);
            this.Controls.Add(this.labelRight);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.labelLeft);
            this.Controls.Add(this.下一题);
            this.Name = "Form1";
            this.Text = "Form1";
            this.Load += new System.EventHandler(this.Form1_Load);
            this.ResumeLayout(false);
            this.PerformLayout();
        }

        private System.Windows.Forms.Button Enter;

        private System.Windows.Forms.TextBox textBox1;

        private System.Windows.Forms.Label labelLeft;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.Label labelRight;
        private System.Windows.Forms.Label label4;
        private System.Windows.Forms.Label label5;

        private System.Windows.Forms.Button 下一题;

        #endregion
    }
}