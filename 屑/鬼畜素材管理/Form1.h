#pragma once
#define ◎ using namespace System
#include <fstream>
#include <io.h>
#include <iostream>
#include <vector>
int prefix=0;//文件角色名前缀
int split=0;//分割符
namespace ff {
	◎;
	◎::ComponentModel;
	◎::Collections;
	◎::Runtime::InteropServices;
	◎::Windows::Forms;
	◎::Data;
	◎::Drawing;	
	public ref class Form1:public System::Windows::Forms::Form
	{
		public:Form1(void)
		{
			InitializeComponent();
			//在此处添加构造函数代码
		}
		protected:~Form1(){if(components)delete components;}//清理所有正在使用的资源
		private:System::Windows::Forms::TextBox^textBox1;
		private:System::Windows::Forms::Button^button1;
		private:System::Windows::Forms::Label^label1;
		private:System::Windows::Forms::RadioButton^ClrPrefix;
		private:System::Windows::Forms::GroupBox^groupBox1;
		private:System::Windows::Forms::RadioButton^AddPrefix;
		private:System::Windows::Forms::Label^output;
		private:System::Windows::Forms::Label^label4;
		private:System::ComponentModel::Container ^components;// 必需的设计器变量
		//屑函数
		String^ char2String(char x[]){//char[]变String^
			String^y=gcnew String(x);
			return y;
		}
		char* String2char(String^x){//String^变char*
			return (char*)(void*)Marshal::StringToHGlobalAnsi(x);
		}
		#pragma region Windows Form Designer generated code
				//设计器支持所需的方法，不要使用代码编辑器修改此方法的内容
				void InitializeComponent(void)
				{
					this->textBox1 = (gcnew System::Windows::Forms::TextBox());
					this->button1 = (gcnew System::Windows::Forms::Button());
					this->label1 = (gcnew System::Windows::Forms::Label());
					this->ClrPrefix = (gcnew System::Windows::Forms::RadioButton());
					this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
					this->AddPrefix = (gcnew System::Windows::Forms::RadioButton());
					this->output = (gcnew System::Windows::Forms::Label());
					this->label4 = (gcnew System::Windows::Forms::Label());
					this->groupBox1->SuspendLayout();
					this->SuspendLayout();
					// 
					// textBox1
					// 
					this->textBox1->Location = System::Drawing::Point(38, 46);
					this->textBox1->Name = L"textBox1";
					this->textBox1->Size = System::Drawing::Size(622, 25);
					this->textBox1->TabIndex = 0;
					this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
					// 
					// button1
					// 
					this->button1->Location = System::Drawing::Point(38, 130);
					this->button1->Name = L"button1";
					this->button1->Size = System::Drawing::Size(108, 34);
					this->button1->TabIndex = 1;
					this->button1->Text = L"修改文件名";
					this->button1->UseVisualStyleBackColor = true;
					this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
					// 
					// label1
					// 
					this->label1->AutoSize = true;
					this->label1->Font = (gcnew System::Drawing::Font(L"宋体", 20));
					this->label1->Location = System::Drawing::Point(32, 9);
					this->label1->Name = L"label1";
					this->label1->Size = System::Drawing::Size(151, 34);
					this->label1->TabIndex = 3;
					this->label1->Text = L"素材路径";
					this->label1->Click += gcnew System::EventHandler(this, &Form1::label1_Click);
					// 
					// ClrPrefix
					// 
					this->ClrPrefix->AutoSize = true;
					this->ClrPrefix->Location = System::Drawing::Point(110, 22);
					this->ClrPrefix->Name = L"ClrPrefix";
					this->ClrPrefix->Size = System::Drawing::Size(88, 19);
					this->ClrPrefix->TabIndex = 5;
					this->ClrPrefix->Text = L"去除前缀";
					this->ClrPrefix->UseVisualStyleBackColor = true;
					this->ClrPrefix->CheckedChanged += gcnew System::EventHandler(this, &Form1::ClrPrefix_CheckedChanged);
					// 
					// groupBox1
					// 
					this->groupBox1->Controls->Add(this->AddPrefix);
					this->groupBox1->Controls->Add(this->ClrPrefix);
					this->groupBox1->Location = System::Drawing::Point(38, 77);
					this->groupBox1->Name = L"groupBox1";
					this->groupBox1->Size = System::Drawing::Size(200, 47);
					this->groupBox1->TabIndex = 6;
					this->groupBox1->TabStop = false;
					this->groupBox1->Text = L"前缀";
					this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter_1);
					// 
					// AddPrefix
					// 
					this->AddPrefix->AutoSize = true;
					this->AddPrefix->Checked = true;
					this->AddPrefix->Location = System::Drawing::Point(9, 22);
					this->AddPrefix->Name = L"AddPrefix";
					this->AddPrefix->Size = System::Drawing::Size(88, 19);
					this->AddPrefix->TabIndex = 7;
					this->AddPrefix->TabStop = true;
					this->AddPrefix->Text = L"添加前缀";
					this->AddPrefix->UseVisualStyleBackColor = true;
					this->AddPrefix->CheckedChanged += gcnew System::EventHandler(this, &Form1::AddPrefix_CheckedChanged);
					// 
					// output
					// 
					this->output->AutoSize = true;
					this->output->Font = (gcnew System::Drawing::Font(L"宋体", 20));
					this->output->Location = System::Drawing::Point(35, 167);
					this->output->Name = L"output";
					this->output->Size = System::Drawing::Size(219, 34);
					this->output->TabIndex = 7;
					this->output->Text = L"阿巴阿巴阿巴";
					this->output->Click += gcnew System::EventHandler(this, &Form1::output_Click_1);
					// 
					// label4
					// 
					this->label4->AutoSize = true;
					this->label4->Font = (gcnew System::Drawing::Font(L"宋体", 20));
					this->label4->Location = System::Drawing::Point(232, 305);
					this->label4->Name = L"label4";
					this->label4->Size = System::Drawing::Size(0, 34);
					this->label4->TabIndex = 10;
					this->label4->Click += gcnew System::EventHandler(this, &Form1::label4_Click);
					// 
					// Form1
					// 
					this->AutoScaleDimensions = System::Drawing::SizeF(8, 15);
					this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
					this->ClientSize = System::Drawing::Size(752, 381);
					this->Controls->Add(this->output);
					this->Controls->Add(this->label4);
					this->Controls->Add(this->groupBox1);
					this->Controls->Add(this->label1);
					this->Controls->Add(this->button1);
					this->Controls->Add(this->textBox1);
					this->Name = L"Form1";
					this->Text = L"Barry的鬼畜素材操作程序";
					this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
					this->groupBox1->ResumeLayout(false);
					this->groupBox1->PerformLayout();
					this->ResumeLayout(false);
					this->PerformLayout();

				}
		#pragma endregion
		//正片		
		private:System::Void Form1_Load(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void output_Click_1(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void textBox1_TextChanged(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void label3_Click(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void groupBox1_Enter_1(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void label4_Click(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void groupBox1_Enter(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void label1_Click(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void output_Click(System::Object^sender,System::EventArgs^e){
		}
		private:System::Void AddPrefix_CheckedChanged(System::Object^sender,System::EventArgs^e){
			prefix=1;
			output->Text="添加前缀";
		}
		private:System::Void ClrPrefix_CheckedChanged(System::Object^sender,System::EventArgs^e){
			prefix=0;
			output->Text="去除前缀";
		}
		private:System::Void button1_Click(System::Object ^sender,System::EventArgs^e){
			int i=0;
			char* si=String2char(textBox1->Text);//String^变char*
			char *s=0,site[100]="",site0[1000]="",site1[1000]="",scha[1000]="",s0[1000]="角色名：";
			String^so="";
			struct _finddata_t file;//鬼畜音源
			strcpy(site,si);//路径名
			_findfirst(site,&file);
			strcpy(scha,file.name);//角色名
			strcat(site,"/*");
			intptr_t I=_findfirst(site,&file);
			_findnext(I,&file);
			while(!_findnext(I,&file)){//改素材文件名
				i++;
				if(!prefix){//加后缀时
					if(file.name[0]!=-95)continue;//开头不为"【"则跳过
					strcpy(site0,site);site0[strlen(site0)-1]=0;
					strcpy(site1,site);site1[strlen(site1)-1]=0;
					strcat(site0,file.name);
					for(int j=0;j<strlen(file.name)-1;j++){
						if(file.name[j]==-95&&file.name[j+1]==-65){
							j+=2;
							int k=strlen(site1);
							while(file.name[j]!=0){
								site1[k]=file.name[j];
								j++;k++;
							}
							site1[k]=0;
							break;
						}
					}	
				}else{//去后缀时
					if(file.name[0]==-95 && file.name[1]==-66)continue;//开头为"【"则跳过
					strcpy(site0,site);site0[strlen(site0)-1]=0;
					strcpy(site1,site);site1[strlen(site1)-1]=0;
					strcat(site0,file.name);
					strcat(site1,"【");
					strcat(site1,scha);
					strcat(site1,"】");
					strcat(site1,file.name);
				}
				rename(site0,site1);
			}  
			strcat(s0,scha);strcat(s0,"\n");
			site[strlen(site)-2]=0;
			strcat(s0,"素材路径：");strcat(s0,site);strcat(s0,"\n");
			strcat(s0,"素材数量：");strcat(s0,itoa(i,site,10));
			so=char2String(s0);//char[]变String^
			output->Text=so;//输出字符串
		}
	};
}
