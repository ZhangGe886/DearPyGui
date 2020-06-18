# pragma once

#include "Core/mvPythonTranslator.h"
#include <map>
#include <string>

namespace Marvel{

	static std::map<std::string, mvPythonTranslator> BuildTranslations()
	{
		std::map<std::string, mvPythonTranslator> translators = {

			{"addPlot", mvPythonTranslator({
				{mvPythonDataType::String, "name"},
				{mvPythonDataType::Optional},
				{mvPythonDataType::String, "xAxisName"},
				{mvPythonDataType::String, "yAxisName"},
				{mvPythonDataType::Integer, "width"},
				{mvPythonDataType::Integer, "height"}
			}, false, "Needs documentation")},

			{"clearPlot", mvPythonTranslator({
				{mvPythonDataType::String, "plot"},
			}, false, "Needs documentation")},

			{"addLineSeries", mvPythonTranslator({
				{mvPythonDataType::String, "plot"},
				{mvPythonDataType::String, "name"},
				{mvPythonDataType::FloatList, "data"},
				{mvPythonDataType::Optional},
				{mvPythonDataType::IntList, "style", true}
			}, false, "Needs documentation")},

			{"addScatterSeries", mvPythonTranslator({
				{mvPythonDataType::String, "plot"},
				{mvPythonDataType::String, "name"},
				{mvPythonDataType::FloatList, "data"},
				{mvPythonDataType::Optional},
				{mvPythonDataType::IntList, "style", true}
			}, false, "Needs documentation")}

		};

		return translators;
	}

}