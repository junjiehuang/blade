/********************************************************************
	created:	2010/04/02
	filename: 	WindowSystemPlugin.h
	author:		Crazii
	
	purpose:	
*********************************************************************/
#ifndef __Blade_WindowSystemPlugin_h__
#define __Blade_WindowSystemPlugin_h__
#include <PluginBase.h>

namespace Blade
{
	class WindowSystemPlugin : public PluginBase
	{
	public:
		WindowSystemPlugin();
		~WindowSystemPlugin();

		/*
		@describe
		@param
		@return
		*/
		virtual void				getSupportList(TStringParam& supportList) const;

		/*
		@describe return other plugin that this one depend on
		@param none
		@return dependency list of other plugins's support
		*/
		virtual void				getDependency(TStringParam& dependencyList) const;

		/*
		@describe install the plugin to the framework
		@param none
		@return none
		@remark it's to initialize the plugin itself \n
		and must not use the framework or other plugin
		*/
		virtual void				install();

		/*
		@describe uninstall the plugin
		@param 
		@return 
		*/
		virtual void				uninstall();

		/*
		@describe this will be called after subsystems are initialized
		@param 
		@return 
		*/
		virtual void				initialize();

		/*
		@describe this will be called right before the framework terminate all systems
		@param 
		@return 
		*/
		virtual void				shutdown();

	};//class WindowSystemPlugin

	
}//namespace Blade


#endif //__Blade_WindowSystemPlugin_h__