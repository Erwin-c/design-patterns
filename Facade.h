/*
 * Facade.h
 *
 *  Author: Erwin
 */

#ifndef FACADE_H_
#define FACADE_H_

class Television {
 public:
  void on() {
    std::cout << "Television on()" << std::endl;
    return;
  }

  void off() {
    std::cout << "Television off()" << std::endl;
    return;
  }
};

class Light {
 public:
  void on() {
    std::cout << "Light on()" << std::endl;
    return;
  }

  void off() {
    std::cout << "Light off()" << std::endl;
    return;
  }
};

class Audio {
 public:
  void on() {
    std::cout << "Audio on()" << std::endl;
    return;
  }

  void off() {
    std::cout << "Audio off()" << std::endl;
    return;
  }
};

class KTVMode {
 public:
  KTVMode() {
    pTv = new Television;
    pLight = new Light;
    pAudio = new Audio;
  }

  void onKtv() {
    pTv->on();
    pLight->off();
    pAudio->on();

    return;
  }

  void offKtv() {
    pTv->off();
    pLight->on();
    pAudio->off();

    return;
  }

  ~KTVMode() {
    delete pTv;
    delete pLight;
    delete pAudio;
  }

 private:
  Television* pTv;
  Light* pLight;
  Audio* pAudio;
};

#endif  // FACADE_H_
