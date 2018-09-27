/*! \file */

#ifndef __NEONEXTION_NEXTIONVARIABLESTRING
#define __NEONEXTION_NEXTIONVARIABLESTRING

#include "Nextion.h"
#include "INextionWidget.h"
#include "INextionStringValued.h"

/*!
 * \class NextionVariableString
 * \brief Represents a string variable.
 */
class NextionVariableString : public INextionStringValued
{
public:
  /*!
   * \copydoc INextionWidget::INextionWidget
   */
  NextionVariableString(Nextion &nex, uint8_t page, uint8_t component,
                        const char *name)
      : INextionWidget(nex, page, component, name)
      , INextionStringValued(nex, page, component, name)
  {
  }
};

#endif
