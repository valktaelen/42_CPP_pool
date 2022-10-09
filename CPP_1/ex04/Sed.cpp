#include "Sed.hpp"

bool	Sed::checkFile()
{
	if (this->_fileOrigin.empty())
		return (false);
	this->_input.open(this->_fileOrigin, std::ifstream::in);
	if (!(this->_input.is_open()))
	{
		this->_input.close();
		return (false);
	}
	std::string out;
	this->_fileDest = this->_fileOrigin + EXT_OUT;
	this->_output.open(this->_fileDest, std::ofstream::out
		| std::ofstream::trunc);
	if (!(this->_output.is_open()))
	{
		this->_input.close();
		this->_output.close();
		return (false);
	}
	return (true);
}

void Sed::applySed(std::string fileOrigin, std::string s1, std::string s2)
{
	if (this->_input.is_open())
		this->_input.close();
	if (this->_output.is_open())
		this->_output.close();
	this->_fileOrigin = fileOrigin;
	this->_s1 = s1;
	this->_s2 = s2;
	if (!checkFile())
	{
		std::wcout << "Bad file name" << std::endl;
		return ;
	}
	else
		this->replace();
}

Sed::Sed(std::string fileOrigin, std::string s1, std::string s2)
	:_fileOrigin(fileOrigin), _s1(s1), _s2(s2)
{
	if (!checkFile())
	{
		std::wcout << "Bad file name" << std::endl;
		return ;
	}
	else
		this->replace();
}

Sed::Sed() {}

Sed::~Sed()
{
	if (this->_input.is_open())
		this->_input.close();
	if (this->_output.is_open())
		this->_output.close();
}

void	Sed::copy()
{
	char	buf[SIZE_BUF] = {0};
	while (this->_input.get(buf, SIZE_BUF - 1, EOF))
		this->_output << buf;
}

int	Sed::replace()
{
	if (this->_s1.empty())
		this->copy();
	else
	{
		size_t	len = this->_s1.length();
		size_t	len_buf = len + len + 1;
		char	buf[len_buf];
		this->_input.get(buf, len_buf, EOF);
		std::string tmp;
		size_t		i;
		size_t		find;
		do
		{
			tmp = buf;
			if (tmp.empty())
				return (1);
			find = tmp.find(this->_s1);
			if (find == std::string::npos)
			{
				i = 0;
				while (i < len_buf / 2)
				{
					this->_output << buf[i];
					buf[i] = buf[len_buf / 2 + i];
					buf[len_buf / 2 + i] = 0;
					i++;
				}
			}
			else
			{
				i = 0;
				while (i < find)
				{
					this->_output << buf[i];
					i++;
				}
				i = 0;
				while (i < len_buf)
				{
					if (i + find + len < len_buf)
						buf[i] = buf[i + find + len];
					else
						buf[i] = 0;
					i++;
				}
				this->_output << this->_s2;
				i = len_buf - (find + len) - 1;
			}
		} while (this->_input.get(&(buf[i]), len_buf - i, EOF));
		if (!tmp.empty())
			this->_output << buf;
	}
	return (1);
}
