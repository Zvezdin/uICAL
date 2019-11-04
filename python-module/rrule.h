#ifndef python_rrule_h
#define python_rrule_h

namespace uical_python {
    typedef struct {
        PyObject_HEAD
        uICAL::RRule::ptr rrule;
    } RRuleObject;

    bool PyInit_RRule(PyObject* module);
}
#endif
