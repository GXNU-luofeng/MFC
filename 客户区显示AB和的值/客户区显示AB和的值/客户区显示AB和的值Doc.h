
// �ͻ�����ʾAB�͵�ֵDoc.h : C�ͻ�����ʾAB�͵�ֵDoc ��Ľӿ�
//


#pragma once


class C�ͻ�����ʾAB�͵�ֵDoc : public CDocument
{
protected: // �������л�����
	C�ͻ�����ʾAB�͵�ֵDoc();
	DECLARE_DYNCREATE(C�ͻ�����ʾAB�͵�ֵDoc)

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
	virtual ~C�ͻ�����ʾAB�͵�ֵDoc();
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
