
// ѡ��һ���ļ����ڿͻ�����ʾDoc.h : Cѡ��һ���ļ����ڿͻ�����ʾDoc ��Ľӿ�
//


#pragma once


class Cѡ��һ���ļ����ڿͻ�����ʾDoc : public CDocument
{
protected: // �������л�����
	Cѡ��һ���ļ����ڿͻ�����ʾDoc();
	DECLARE_DYNCREATE(Cѡ��һ���ļ����ڿͻ�����ʾDoc)

// ����
public:

// ����
public:

// ��д
public:
	virtual BOOL OnNewDocument();
	virtual void Serialize(CArchive& ar);
#ifdef SHARED_HANDLERS
	virtual void InitializeSearchContent();
	virtual void OnDrawThumbnail(CDC& dc, LPRECT lprcBounds);
#endif // SHARED_HANDLERS

// ʵ��
public:
	virtual ~Cѡ��һ���ļ����ڿͻ�����ʾDoc();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// ���ɵ���Ϣӳ�亯��
protected:
	DECLARE_MESSAGE_MAP()

#ifdef SHARED_HANDLERS
	// ����Ϊ����������������������ݵ� Helper ����
	void SetSearchContent(const CString& value);
#endif // SHARED_HANDLERS
};
