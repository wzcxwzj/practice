#ifndef HISTOGRAMVIEW_H
#define HISTOGRAMVIEW_H

#include <QAbstractItemView>

class HistogramView : public QAbstractItemView
{
public:
    HistogramView();
 //   QRect visualRect(const QModelIndex &index) const;

};

#endif // HISTOGRAMVIEW_H
//虚函数声明
//   QRect visualRect(const QModelIndex &index) const;
//   void scrollTo(const QModelIndex &index, ScrollHint hint=EnsureVisible);
//   QModelIndex indexAt(const QPoint &point) const;

//   void setSelectionModel(QItemSelectionModel *selectionModel);
//   QRegion itemRegion(QModelIndex index);
//   void paintEvent(QPaintEvent *);
//   void mousePressEvent(QMouseEvent *event);

//protected slots:
//   void selectionChanged(const QItemSelection &selected, const QItemSelection &deselected);
//   void dataChanged(const QModelIndex &topLeft, const QModelIndex &bottomRight);
//protected:
//   QModelIndex moveCursor(QAbstractItemView::CursorAction cursorAction, Qt::KeyboardModifiers modifiers);
//   int horizontalOffset()const;
//   int verticalOffset()const;
//   bool isIndexHidden(const QModelIndex &index) const;
//   void setSelection(const QRect &rect, QItemSelectionModel::SelectionFlags command);
//   QRegion visualRegionForSelection(const QItemSelection &selection) const;

//private:
//   QItemSelectionModel *selections;
//   QList<QRegion>MRegionList;
//   QList<QRegion>PRegionList;
//   QList<QRegion>SRegionList;
