#pragma once

#include "mvTypeBases.h"
#include "mvPythonParser.h"

namespace Marvel {

	PyObject* add_tooltip(PyObject* self, PyObject* args, PyObject* kwargs);

	class mvTooltip : public mvBoolPtrBase
	{

	public:

		static void InsertParser(std::map<std::string, mvPythonParser>* parsers);

	public:

		MV_APPITEM_TYPE(mvAppItemType::Tooltip, "add_tooltip")

		mvTooltip(const std::string& name);

		void draw() override;

	};

}