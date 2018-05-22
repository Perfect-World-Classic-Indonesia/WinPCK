#pragma once

class CCharsCodeConv
{
public:
	CCharsCodeConv();
	~CCharsCodeConv();

protected:

	void *	m_buffer;
	BOOL	m_ok;
};


class CAnsi2Ucs : public CCharsCodeConv
{
public:
	CAnsi2Ucs(){ }
	virtual ~CAnsi2Ucs() {};

	const wchar_t *GetString(const char *_src, wchar_t *_dst = NULL, int _dstsize = 0);	//ANSI和UNICODE互转
	int		GetStrlen(const char *_src);	//ANSI字符在对应的UNICODE的wcslen下的返回值
};

class CUcs2Ansi : public CCharsCodeConv
{
public:
	CUcs2Ansi(){ }
	virtual ~CUcs2Ansi() {};

	const char *GetString(const wchar_t *_src, char *_dst = NULL, int _dstsize = 0);
	int		GetStrlen(const wchar_t *_src);	//UNICODE字符在对应的ANSI的strlen下的返回值
};
