
// ���Ի���������Բ1Doc.h : C���Ի���������Բ1Doc ��Ľӿ�
//


#pragma once


class C���Ի���������Բ1Doc : public CDocument
{
protected: // �������л�����
	C���Ի���������Բ1Doc();
	DECLARE_DYNCREATE(C���Ի���������Բ1Doc)

// ����
public:
	CRect rect;

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
	virtual ~C���Ի���������Բ1Doc();
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
