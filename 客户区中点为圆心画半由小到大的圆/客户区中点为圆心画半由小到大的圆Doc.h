
// �ͻ����е�ΪԲ�Ļ�����С�����ԲDoc.h : C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc ��Ľӿ�
//


#pragma once


class C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc : public CDocument
{
protected: // �������л�����
	C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc();
	DECLARE_DYNCREATE(C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc)

// ����
public:
	int c;
	int d;
	int e;
	int f;

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
	virtual ~C�ͻ����е�ΪԲ�Ļ�����С�����ԲDoc();
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
