#ifndef CUSTOMCEFVIEW_H
#define CUSTOMCEFVIEW_H

#include <include/QCefView.h>

class CustomCefView : public QCefView
{
  Q_OBJECT

public:
  using QCefView::QCefView;
  ~CustomCefView();

  void changeColor();

protected:
  virtual void onDraggableRegionChanged(const QRegion& region) override;

  virtual void onQCefUrlRequest(const QString& url) override;

  virtual void onQCefQueryRequest(const QCefQuery& query) override;

  virtual void onInvokeMethodNotify(int browserId,
                                    int frameId,
                                    const QString& method,
                                    const QVariantList& arguments) override;

private:
};

#endif // CUSTOMCEFVIEW_H
