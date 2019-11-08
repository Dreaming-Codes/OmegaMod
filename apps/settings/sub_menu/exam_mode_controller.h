#ifndef SETTINGS_EXAM_MODE_CONTROLLER_H
#define SETTINGS_EXAM_MODE_CONTROLLER_H

#include "generic_sub_controller.h"
#include "preferences_controller.h"

namespace Settings {

class ExamModeController : public GenericSubController {
public:
  ExamModeController(Responder * parentResponder);
  void didEnterResponderChain(Responder * previousFirstResponder) override;
  bool handleEvent(Ion::Events::Event event) override;
  HighlightCell * reusableCell(int index, int type) override;
  int reusableCellCount(int type) override;
  void willDisplayCellForIndex(HighlightCell * cell, int index) override;
private:
  constexpr static int k_totalNumberOfCell = 2;
  MessageTableCellWithBuffer m_cells[k_totalNumberOfCell];
  PreferencesController m_preferencesController;
};

}

#endif
