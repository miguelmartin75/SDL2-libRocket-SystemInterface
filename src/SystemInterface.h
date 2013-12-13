#ifndef __SYSTEMINTERFACE_H__
#define __SYSTEMINTERFACE_H__

#include <Rocket/Core/SystemInterface.h>
#include <Rocket/Core/Input.h>

#include <SDL2/SDL_keycode.h>

class SystemInterface
	: public Rocket::Core::SystemInterface
{
public:
	
	/// Get the number of seconds elapsed since the start of the application.
	/// \return Elapsed time, in seconds.
	virtual float GetElapsedTime();
	
	/// Activate keyboard (for touchscreen devices)
	virtual void ActivateKeyboard();
	
	/// Deactivate keyboard (for touchscreen devices)
	virtual void DeactivateKeyboard();
	
	/// Called when this system interface is no longer required.
	virtual void Release();
	
	/// Log the specified message.
	/// \param[in] type Type of log message, ERROR, WARNING, etc.
	/// \param[in] message Message to log.
	/// \return True to continue execution, false to break into the debugger.
    virtual bool LogMessage(Rocket::Core::Log::Type type, const Rocket::Core::String& message);
    
    int getKeyModifiers() const;
    Rocket::Core::Input::KeyIdentifier translateKey(const SDL_Keycode&) const;
    
    int translateButton(int button) const;
};

#endif // __SYSTEMINTERFACE_H__