
// ���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc.h : C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc ��Ľӿ�
//


#pragma once


class C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc : public CDocument
{
protected: // �������л�����
	C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc();
	DECLARE_DYNCREATE(C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc)

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
	virtual ~C���Կͻ�������ΪԲ�Ļ���С������ɫ�����ԲDoc();
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
